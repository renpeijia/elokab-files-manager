/***************************************************************************
 *   elokab Copyright (C) 2014 AbouZakaria <yahiaui@gmail.com>             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef MYTREEVIEW_H
#define MYTREEVIEW_H

#include <QTreeView>

#include <QFileSystemModel>
/**
 * @brief The MyTreeView class
 *
 */
class MyTreeView : public QTreeView
{
          Q_OBJECT
     public:
          /**
     * @brief MyTreeView
     * @param model
     * @param parent
     */
          explicit MyTreeView(QFileSystemModel *model,QWidget *parent = 0);

          //!
          QModelIndexList selectedIndexes() const;
     signals:

     public slots:

          //!
          QStringList selectedFiles();

          //!
          void setRootPath(const QString &url);

          //!
          void   setTreeIconSize(int size) ;

          //!
          void setExpandable(bool show){setRootIsDecorated(show);}

     private:

          /*!< cmment */
          QFileSystemModel *mModel;
};

#endif // MYTREEVIEW_H