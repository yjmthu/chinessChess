/*
 * Author:  kirayamato
 * mail:    kirawhile1@gmail.com
 * github:  https://github.com/kira-yamatoo
 * blogs:   http://www.kirayamato.fun/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/gpl-3.0.html>.
 */
#include "ChessVoice.h"
#include <QUrl>

ChessVoice::ChessVoice(QObject *parent) : QObject(parent),
    m_win(new QSoundEffect(this)),
    m_select(new QSoundEffect(this)),
    m_move(new QSoundEffect(this)),
    m_eat(new QSoundEffect(this)),
    m_back(new QSoundEffect(this)),
    m_general(new QSoundEffect(this))
{
    m_win->setSource(QUrl(":/sound/WinSound.wav"));
    m_select->setSource(QUrl(":/sound/selectChess.wav"));
    m_move->setSource(QUrl(":/sound/moveChess.wav"));
    m_eat->setSource(QUrl(":/sound/eatChess.wav"));
    m_back->setSource(QUrl(":/sound/backChess.wav"));
    m_general->setSource(QUrl(":/sound/generalSound.wav"));
}
ChessVoice:: ~ChessVoice()
{

}

void ChessVoice:: voiceWin()
{
    if(m_win)
        this->m_win->play();
}

void ChessVoice::voiceSelect()
{
    if(m_select)
        this->m_select->play();
}

void ChessVoice:: voiceMove()
{
    if(m_move)
        this->m_move->play();
}

void ChessVoice:: voiceEat()
{
    if(m_eat)
        this->m_eat->play();
}

void ChessVoice:: voiceBack()
{
    if(m_back)
        this->m_back->play();
}

void ChessVoice:: voiceGeneral()
{
    if(m_general)
        this->m_general->play();
}
